public class Pen implements Writable {
    protected int amount;
    protected int capacity;

    public Pen(int capacity) {
        this.capacity = capacity;
        this.amount = capacity;
    }

    public Pen() {
        this(4096);
    }

    public int getAmount() {
        return this.amount;
    }
    public int getCapacity() {
        return this.capacity;
    }

    public void refill() {
        this.amount = this.capacity;
    }

    public void write(Paper paper, String message) throws
        OutOfInkException, OutOfSpaceException, ClosedPenException
    {
        if ( this.amount == 0 ) {
            throw new OutOfInkException();
        }
        if ( message.length() > this.amount ) {
            paper.addContent(message.substring(0, this.amount));
            this.amount = 0;
            return;
        }
        paper.addContent(message);
        this.amount -= message.length();
    }

    public String toString() {
        StringBuilder out = new StringBuilder("Pen(");

        out.append(this.amount);
        out.append('/');
        out.append(this.capacity);
        out.append(')');

        return out.toString();
    }
}

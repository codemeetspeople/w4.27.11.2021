public class Paper {
    private StringBuilder content = new StringBuilder();
    private int symbols;

    public Paper(int symbols) {
        this.symbols = symbols;
    }

    public Paper() {
        this(512);
    }

    public StringBuilder getContent() {
        return this.content;
    }

    public int getSymbols() {
        return this.symbols;
    }

    public void show() {
        System.out.println(this.content.toString());
    }

    public void addContent(String message) throws
        OutOfSpaceException
    {
        if ( this.content.length() == this.symbols ) {
            throw new OutOfSpaceException();
        }
        int available = this.symbols - this.content.length();

        if ( message.length() > available ) {
            this.content.append(message.substring(0, available));
        }
        this.content.append(message);
    }

    public String toString() {
        StringBuilder out = new StringBuilder("Paper(");

        out.append(this.content.length());
        out.append('/');
        out.append(this.symbols);
        out.append(')');

        return out.toString();
    }
}
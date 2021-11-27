public class Main {
    public static void main(String args[]) throws
        OutOfInkException, OutOfSpaceException, ClosedPenException
    {
        Pen pen = new Pen();
        Paper paper = new Paper();
        AutoPen ap = new AutoPen();

        pen.write(paper, "Hello!");
        paper.show();
        System.out.println(pen);
        System.out.println(paper);

        ap.click();
        ap.write(paper, "Hello again!");

        System.out.println(ap);
        System.out.println(paper);

    }
}

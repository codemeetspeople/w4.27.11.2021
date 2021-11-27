public class CatDog implements Cat, Dog {
    private String name;

    public CatDog() {
        this.name = "CatDog";
    }

    public void eat() {
        System.out.println(this.name + " eats fish and meat");
    }

    public void bark() {
        System.out.println(this.name + " say woof-woof...");
    }

    public void meow() {
        System.out.println(this.name + " say meow...");
    }
}
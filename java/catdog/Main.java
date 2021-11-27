public class Main {
    public static void handleAnimal(Animal animal) {
        animal.eat();
    }

    public static void handleCat(Cat cat) {
        cat.meow();
    }

    public static void handleDog(Dog dog) {
        dog.bark();
    }

    public static void main(String args[]) {
        CatDog cd = new CatDog();

        handleAnimal(cd);
        handleCat(cd);
        handleDog(cd);
    }
}
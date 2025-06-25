// Uso da interface meuIterator.

public class Main {
    public static void main(String[] args) {
        MyList<Integer> a = new MyList<>();
        a.add(10);
        a.add(20);
        a.add(15);

        myIterator<Integer> it = a.getIterator();
        System.out.print("Imprimindo a lista: ");
        while(it.hasNext()) {
            Integer number = it.next();
            System.out.print(number + " ");
        }
        System.out.println();

        BinaryTree<Integer> b = new BinaryTree<>();

        b.add(10);
        b.add(40);
        b.add(50);
        b.add(30);
        b.add(15);
        b.add(25);

        myIterator<Integer> it2 = b.getIterator();


        System.out.print("Imprimindo uma árvore: ");
        while(it2.hasNext()){
            Integer number = it2.next();
            System.out.print(number + " ");
        }
        System.out.println();
    }
}
import java.util.Comparator;
import java.util.List;
import java.util.LinkedList;

public class BinaryTree<T extends Comparable<T>> {
    private No<T> raiz;

    private static class No<T> {
        T val;
        No<T> left;
        No<T> right;

        No(T val){
            this.val = val;
            this.left = null;
            this.right = null;
        }
    }

    public void add(T valor) {
        raiz = rec_add(raiz, valor);
    }

    private No<T> rec_add(No<T> at, T val) {
        if(at == null) {
            return new No<>(val);
        }

        if(val.compareTo(at.val) < 0) {
            at.left = rec_add(at.left, val);
        }
        else if(val.compareTo(at.val) > 0){
            at.right = rec_add(at.right, val);
        }

        return at;
    }

    public myIterator<T> getIterator() {
        return new TreeIterator();
    }

    private class TreeIterator<T> implements myIterator<T> {
        private List<T> inOrderNodes;
        private int id_at;

        public TreeIterator() {
            this.inOrderNodes = new LinkedList<>();
            this.id_at = 0;

            inOrder((No<T>) raiz);
        }

        private void inOrder(No<T> no) {
            if(no != null){
                inOrder(no.left);
                inOrderNodes.add(no.val);
                inOrder(no.right);
            }
        }

        @Override
        public boolean hasNext() {
            return id_at < inOrderNodes.size();
        }

        @Override
        public T next() {
            if (!hasNext()) {
                throw new RuntimeException("Não há mais elementos para iterar.");
            }
            return inOrderNodes.get(id_at++);
        }
    }
}

public class MyList<T> {
    private Object[] elem; // guardar elementos
    private int tam; // guardar tamanho da lista
    private static final int init_cap = 1; // capacidade inicial

    public MyList() {
        this.elem = new Object[init_cap];
        this.tam = 0;
    }

    public void add(T item) {
        if(tam == elem.length) {
            Object[] new_array = new Object[elem.length * 2];
            System.arraycopy(elem, 0, new_array, 0, elem.length);
            elem = new_array;
        }
        elem[tam++] = item;
    }

    public myIterator<T> getIterator() {
        return new MyListIterator();
    }

    private class MyListIterator implements myIterator<T> {
        private int id_atual;

        @Override
        public boolean hasNext() {
            return id_atual < tam;
        }

        @Override
        public T next() {
            if(!hasNext()) {
                throw new RuntimeException("Acabou os elementos.");
            }
            T el = (T) elem[id_atual];
            id_atual++;
            return el;
        }
    }
}

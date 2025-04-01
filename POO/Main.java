package Wevton;

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String cod, nome, tipo;
		int qtd;
		double val_prod;
		
		int n;
		
		System.out.print("Insira a quantidade de produtos a serem lidos: ");
		
		n = sc.nextInt();
		
		Produto vet[] = new Produto[n];
		
		sc.nextLine();
		
		for(int i=0; i<n; i++) {
			System.out.print("Insira o código do produto: ");
			cod = sc.nextLine();
			System.out.print("Insira o nome do produto: ");
			nome = sc.nextLine();
			System.out.print("Insira a quantidade desse produto no estoque: ");
			qtd = sc.nextInt();
			sc.nextLine();
			System.out.print("Insira a categoria do produto: ");
			tipo = sc.nextLine();
			System.out.print("Insira o preço do produto: ");
			val_prod = sc.nextDouble();
			sc.nextLine();
			
			vet[i] = new Produto(cod, nome, qtd, tipo, val_prod);
			
			System.out.println("Produto " + (i+1) + " criado com sucesso!");
			if(i+1 < n) System.out.println(" Seguindo para o próximo.");
			System.out.println();
		}
		
		System.out.print("Insira a quantidade de perguntas a serem feitas: ");
		int q;
		q = sc.nextInt();
		sc.nextLine();
	}
}

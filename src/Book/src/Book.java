package Book.src;

import java.util.*;

public class Book {
	String title, author;

	Book() {

	}

	public String toString() {
		return "Book [title=" + title + ", author=" + author + ", page=" + page + ", price=" + price + "]";
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public String getAuthor() {
		return author;
	}

	public void setAuthor(String author) {
		this.author = author;
	}

	public int getPage() {
		return page;
	}

	public void setPage(int page) {
		this.page = page;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public void updatePrice(double rate) {
		this.price = rate;
	}

	int page;
	double price;

	Book(String title, String author, int page, double price) {
		this.title = title;
		this.author = author;
		this.page = page;
		this.price = price;
	}

	public static void main(String[] args) {
		Book b = new Book();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter title: ");
		b.setTitle(sc.nextLine());
		System.out.println("Enter author: ");
		b.setAuthor(sc.nextLine());
		System.out.println("Enter total page: ");
		b.setPage(sc.nextInt());
		System.out.println("Enter price: ");
		b.setPrice(sc.nextDouble());
		System.out.println("Information: " + b.toString());
		System.out.println("How much discount?");
		b.updatePrice(sc.nextDouble());
		System.out.println("After update: " + b.toString());
	}

}

package MidTest;

import java.util.*;

class Book {

  String title;
  String author;
  int page;
  double price;

  public Book() {
  }

  public Book(String title, String author, int page, double price) {
    this.title = title;
    this.author = author;
    this.page = page;
    this.price = price;
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

  void updatePrice(double rate) {
    this.price = price * rate;
  }

  public String toString() {
    return "Book [author=" + author + ", page=" + page + ", price=" + price + ", title=" + title + "]";
  }
}

public class Q1 {
  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    Book b = new Book();
    System.out.println("Please input the title of book: ");
    b.setTitle(sc.nextLine());
    System.out.println("Book's author: ");
    b.setAuthor(sc.nextLine());
    System.out.println("Book total pages: ");
    b.setPage(sc.nextInt());
    System.out.println("Book's price: ");
    b.setPrice(sc.nextDouble());
    System.out.println("The book's informations: " + b.toString());
    System.out.println("How much discount?: ");
    b.updatePrice(sc.nextDouble());
    System.out.println("After update price, the book's information: " + b.toString());
  }

}

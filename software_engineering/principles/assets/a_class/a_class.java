package assets.a_class;


import assets.mister.mister;

public class a_class {
    String code_subject;
    String title;
    String description;
    String date;
    mister mediator;

    public a_class(String code_subject, String title, String description, String date, mister mediator) {
        this.code_subject = code_subject;
        this.title = title;
        this.description = description;
        this.date = date;
        this.mediator = mediator;
    }

    public void print(){
        System.out.println("\nSubject Code: "+code_subject+"\nTitle: "+ title+"\nDescription: "+description+"\nDate: "+date+"\nMediator: "+mediator.getName());
    }

    public String getTitle() {
        return title;
    }
    public void setTitle(String title) {
        this.title = title;
    }
    public String getDescription() {
        return description;
    }
    public void setDescription(String description) {
        this.description = description;
    }
    public String getDate() {
        return date;
    }
    public void setDate(String date) {
        this.date = date;
    }
}
package mister;

import java.sql.Date;

public class mister{
    String name;
    Date birth;
    String identification;
    formation formation[];
    post post;
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public Date getBirth() {
        return birth;
    }
    public void setBirth(Date birth) {
        this.birth = birth;
    }
    public String getIdentification() {
        return identification;
    }
    public void setIdentification(String identification) {
        this.identification = identification;
    }
    public formation[] getFormation() {
        return formation;
    }
    public void setFormation(formation[] formation) {
        this.formation = formation;
    }
    public post getPost() {
        return post;
    }
    public void setPost(post post) {
        this.post = post;
    }

}
package assets.mister;


public class mister{
    String name;
    String birth;
    String identification;
    formation formation[];
    int size_formation;
    formation one_formation;
    post post;
    
    public mister(String name, String birth, String identification, formation formation, post post) {
        this.name = name;
        this.birth = birth;
        this.identification = identification;
        this.size_formation = 0;
        this.one_formation = formation;
        this.post = post;
    }

    public void add_formation(formation f){
        size_formation++;
        formation[0] = one_formation;
        formation[size_formation] = f;
    }
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getBirth() {
        return birth;
    }
    public void setBirth(String birth) {
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
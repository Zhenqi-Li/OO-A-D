class circle: public shape {

public:
   circle(int nx, int ny, int nr);
   int getr();
   void setr(int nr);
   void draw();

private:
   int r;
};
class triangle: public shape {

public:
   triangle(int nx, int ny, int na, int nb, int nc);
   int geta();
   int getb();
   int getc();
   void settriangle(int na, int nb, int nc);
   void draw();

private:
   int a;
   int b;
   int c;
};
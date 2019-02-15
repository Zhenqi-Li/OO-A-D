class square: public shape {

public:
   square(int nx, int ny, int na);
   int geta();
   void seta(int na);
   void draw();

private:
   int a;
};
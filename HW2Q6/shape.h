class shape{
public:
	shape(int x, int y); // create shape at (x, y)
	int getx();
	int gety();
	void setx(int nx);
	void sety(int ny);
	void location(int nx, int ny);
	virtual void draw();
private:
	int x;
	int y;
};


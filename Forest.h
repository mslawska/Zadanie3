
#include "Tree.h"
#include "Shape.h"


class Forest {
     private:
		int H, W;
		//vector<Tree *> trees;
		vector<Shape*> trees;
		int** tab;
     public:
		Forest(int H, int W);
		~Forest();
		//void AddTree(int h, char s, string c, int y, int x);
		void AddShape(Shape* sh, int y, int x); 
		void PrintForest();

		Forest& operator+=(Shape* sh);
};

#include "CCapteur.h"

/**************************************************************
* CLASS : <CCapteur>
* PRESENTATION : <Detection captor for the trees, borders, and obstacles>
*
* PUBLIC METHODS : 
* Constructors     : To construct the captor object
* Getters          : To get the boolean value for the private data
* Setters          : To set the boolean value for the private data
*
* OBSERVATIONS : **************************************************************/

/*Constructors and destructor*/
CCapteur::CCapteur()
{
}

CCapteur::CCapteur(bool valTree, bool valObstacle, bool valBorder)
{
    // Prevalue for the private data
    Tree        = valTree;
    Obstacle    = valObstacle;
    Border      = valBorder;
}

CCapteur::~CCapteur()
{
}

/*Getters*/
bool CCapteur::GetObstacle()
{
    return Obstacle;
}

bool CCapteur::GetBorder()
{
    return Border;
}

bool CCapteur::GetTree()
{
    return Tree;
}

/*Setters*/
void CCapteur::SetObstacle(bool val)
{
    Obstacle = val;
}

void CCapteur::SetBorder(bool val)
{
    Border = val;
}

void CCapteur::SetTree(bool val)
{
    Tree = val;
}

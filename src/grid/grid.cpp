#include "grid.hpp"

Grid::Grid(int x_grid, int y_grid)
{
  height = y_grid;
  width = x_grid;
}

void Grid::print_grid()
{
  //print top boundary
  for (int i = -1; i < width + 1; i++)
  {
    std::cout << '#';
  }

  std::cout << std::endl;

  //print side boundaries
  for (int i = 0; i < height; i++)
  {
    std::cout << '#';
    for (int j = 0; j < width; j++)
    {
      std::cout << ' ';
    }
    std::cout << '#';
    std::cout << std::endl;
  }

  //print bottom boundary
  for (int i = -1; i < width + 1; i++)
  {
    std::cout << '#';
  }
  std::cout << std::endl;
}

void Grid::print_snakes()
{
  for (int i = 0; i < snakes.size(); i++)
  {
    snakes[i].print_snake();
  }
}

void Grid::update()
{
  print_grid();
  print_snakes();
}

//snake class
void Snake::print_snake()
{
  for (int i = 0; i < body.size(); i++)
  {
    body[i].print_node();
  }
}

//node class
void Node::print_node()
{

}

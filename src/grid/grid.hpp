#ifndef GRID_HPP
#define GRID_HPP

#include <string>
#include <iostream>
#include <vector>

class Snake;
class Node;

class Grid
{
private:
  int height;
  int width;
  std::vector<Snake> snakes;

  void add_snake();
  void print_grid();
  void print_snakes();

public:
  Grid(){}
  Grid(int x_grid, int y_grid);
  Grid(int x_grid, int y_grid, int snake_size, int x_head, int y_head, std::string orientation);
  void update();

};

struct Snake
{
  int size = 2; //size one by default
  std::string head_orientation;
  int x_head;
  int y_head;

  std::vector<Node> body;

  Snake(int node_no);
  void print_snake();
};

struct Node
{
  int x;
  int y;

  Node(int x, int y);
  void print_node();
};


#endif

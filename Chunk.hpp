
#include "Coordinate.hpp"

class Chunk
{
public:
    Coordinate position; // bottom left corner of lowest slice (min (x, y, z))
    vector<vector<vector<Voxel *>>> voxel_array;
};

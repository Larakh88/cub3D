<img src="https://img.shields.io/badge/Passed-90%25-brightgreen" alt="Project Status" width="100">

# cub3D - My first RayCaster with miniLibX
Welcome to the cub3D project repository!

This project is inspired by the iconic Wolfenstein 3D game, the pioneer of first-person shooters. In cub3D, we dive into the world of ray-casting, where the goal is to create a dynamic 3D view inside a maze and navigate through it.

## Raycasting
Ray-casting is a rendering technique used to create a 3D perspective in a 2D environment. It works by casting rays from the player's viewpoint, detecting intersections with walls, and rendering the scene based on these intersections.

## Features

### Graphics and Visualization
- **Smooth Window Management**: Smooth window operations such as switching to another window and minimizing.
- **Textured Walls**: Display walls with different textures based on their facing direction (North, South, East, West), enhancing visual appeal and realism.
- **Dynamic Floor and Ceiling Colors**: Set distinct colors for the floor and ceiling to create a visually appealing environment.
- **Interactive Minimap**: Utilize an interactive minimap to navigate through the maze efficiently, providing additional visual context for exploration.

### Gameplay Mechanics
- **Intuitive Controls**: Use intuitive keyboard controls, including arrow keys for looking left and right, and W, A, S, D keys for movement through the maze.
- **Clean Program Exit**: Ensure clean program termination upon pressing ESC or clicking on the window's close button, enhancing user experience and system stability.
- **Scene Description File**: Accept a scene description file (.cub) as the first argument, containing information about the maze layout, textures, and colors.
- **Flexible Map Parsing**: Parse the map file accurately, handling various configurations and separating different elements using specified identifiers and formats.
- **Error Handling**: Detect and handle misconfigurations in the scene file gracefully, providing informative error messages to guide users and troubleshoot issues.


## Compilation
1. Clone this repository
2. Navigate to the project directory.
3. Compile the project using the provided Makefile:
```make all```
4. Run the program with a `.cub` map file as the first argument:
```./cub3D map.cub```
5. Controls:
	- Use the arrow keys to look left and right.
	- Use the W, A, S, and D keys to move forward, backward, left, and right, respectively.
	- Press ESC to exit the program.

## Note on Texture Displays

Note that the texture displays in this project are not optimized and may require improvements for better performance and visual quality. If time permits at a later stage, we will work on optimizing the texture displays to enhance the overall experience of the game.


## Contributors

<img src="https://img.shields.io/badge/Contributors-2-blue" alt="Contributors" width="100">

- [Yash Kulkarni](https://github.com/Y2Kgunner)
- [Lara Elkhoury](https://github.com/Larakh88)

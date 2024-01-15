# pathfinding.py

def find_path(start, goal):
    # Simplified pathfinding logic
    path = []
    current = start
    while current != goal:
        current = (current[0] + 1, current[1] + 1)
        path.append(current)
    return path

def main():
    start = (0, 0)
    goal = (9, 9)
    path = find_path(start, goal)

    with open('path.txt', 'w') as file:
        for point in path:
            file.write(f"{point[0]},{point[1]}\n")

if __name__ == "__main__":
    main()

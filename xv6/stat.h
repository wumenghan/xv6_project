#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device
#define T_DITTO 4  // Ditto

struct stat {
    short   type;  // Type of file
    int     dev;   // File system's disk device
    uint    ino;   // Inode number
    short   nlink; // Number of links to file
    uint    size;  // Size of file in bytes
    // add
    short child1;
    short child2;
    uint checksum;
};

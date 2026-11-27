/* LEVEL_16:0x022AC8 -- stores a mode on an entry and dispatches on it. */
typedef struct Entry {
    char pad[0x50];
    int mode;
} Entry;
extern int D_001A1AF0;
extern Entry *func_0220C8(unsigned int row, int column);
extern int func_025448(int id, int global, int set);
extern int func_0228E0(unsigned int id, int flag);
extern int func_025338(int key, int flag);

int func_022AC8(unsigned int id, int mode, int idx, int flag)
{
    if (id < 25) {
        func_0220C8(id, idx)->mode = mode;
        if (D_001A1AF0 == -1 || D_001A1AF0 == idx) {
            switch (mode) {
            case 0:
            case 2:
                func_025448(id, idx, mode == 2);
                break;
            case 1:
                func_0228E0(id, 1);
                if (flag != 0) {
                    func_025338(id, idx);
                }
                break;
            }
        }
        return 1;
    }
    return 0;
}

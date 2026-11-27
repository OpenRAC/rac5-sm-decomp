/* LEVEL_19:0x022708 -- placement copy of LEVEL_16_022AC8.c: stores a mode on an entry and dispatches on it. */
typedef struct Entry {
    char pad[0x50];
    int mode;
} Entry;
extern int D_001A2C70;
extern Entry *func_021D08(unsigned int row, int column);
extern int func_024FF0(int id, int global, int set);
extern int func_022520(unsigned int id, int flag);
extern int func_024EE0(int key, int flag);

int func_022708(unsigned int id, int mode, int idx, int flag)
{
    if (id < 25) {
        func_021D08(id, idx)->mode = mode;
        if (D_001A2C70 == -1 || D_001A2C70 == idx) {
            switch (mode) {
            case 0:
            case 2:
                func_024FF0(id, idx, mode == 2);
                break;
            case 1:
                func_022520(id, 1);
                if (flag != 0) {
                    func_024EE0(id, idx);
                }
                break;
            }
        }
        return 1;
    }
    return 0;
}

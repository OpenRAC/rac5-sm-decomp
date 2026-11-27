/* LEVEL_20:0x01F770 -- placement copy of LEVEL_16_022AC8.c: stores a mode on an entry and dispatches on it. */
typedef struct Entry {
    char pad[0x50];
    int mode;
} Entry;
extern int D_001041D0;
extern Entry *func_01EDC8(unsigned int row, int column);
extern int func_021FC0(int id, int global, int set);
extern int func_01F5E0(unsigned int id, int flag);
extern int func_021EB0(int key, int flag);

int func_01F770(unsigned int id, int mode, int idx, int flag)
{
    if (id < 25) {
        func_01EDC8(id, idx)->mode = mode;
        if (D_001041D0 == -1 || D_001041D0 == idx) {
            switch (mode) {
            case 0:
            case 2:
                func_021FC0(id, idx, mode == 2);
                break;
            case 1:
                func_01F5E0(id, 1);
                if (flag != 0) {
                    func_021EB0(id, idx);
                }
                break;
            }
        }
        return 1;
    }
    return 0;
}

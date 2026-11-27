/* LEVEL_17:0x022448 -- placement copy of LEVEL_16_022AC8.c: stores a mode on an entry and dispatches on it. */
typedef struct Entry {
    char pad[0x50];
    int mode;
} Entry;
extern int D_001950F0;
extern Entry *func_021A48(unsigned int row, int column);
extern int func_024DC8(int id, int global, int set);
extern int func_022260(unsigned int id, int flag);
extern int func_024CB8(int key, int flag);

int func_022448(unsigned int id, int mode, int idx, int flag)
{
    if (id < 25) {
        func_021A48(id, idx)->mode = mode;
        if (D_001950F0 == -1 || D_001950F0 == idx) {
            switch (mode) {
            case 0:
            case 2:
                func_024DC8(id, idx, mode == 2);
                break;
            case 1:
                func_022260(id, 1);
                if (flag != 0) {
                    func_024CB8(id, idx);
                }
                break;
            }
        }
        return 1;
    }
    return 0;
}

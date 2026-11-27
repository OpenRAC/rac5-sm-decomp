/* LEVEL_18:0x022110 -- placement copy of LEVEL_16_022AC8.c: stores a mode on an entry and dispatches on it. */
typedef struct Entry {
    char pad[0x50];
    int mode;
} Entry;
extern int D_001A2F70;
extern Entry *func_021710(unsigned int row, int column);
extern int func_0249F8(int id, int global, int set);
extern int func_021F28(unsigned int id, int flag);
extern int func_0248E8(int key, int flag);

int func_022110(unsigned int id, int mode, int idx, int flag)
{
    if (id < 25) {
        func_021710(id, idx)->mode = mode;
        if (D_001A2F70 == -1 || D_001A2F70 == idx) {
            switch (mode) {
            case 0:
            case 2:
                func_0249F8(id, idx, mode == 2);
                break;
            case 1:
                func_021F28(id, 1);
                if (flag != 0) {
                    func_0248E8(id, idx);
                }
                break;
            }
        }
        return 1;
    }
    return 0;
}

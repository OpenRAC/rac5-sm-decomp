typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00209018[];
extern void func_0943A8(Entry *entry, int value);

void func_0944D8(unsigned int index, int value) {
    func_0943A8(&D_00209018[index], value);
}

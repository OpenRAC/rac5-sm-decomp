typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B328[];
extern void func_093F18(Entry *entry, int value);

void func_094070(unsigned int index, int value) {
    func_093F18(&D_0026B328[index], value);
}

typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B328[];
extern void func_093F18(Entry *entry);

void func_094070(unsigned int index) {
    func_093F18(&D_0026B328[index]);
}

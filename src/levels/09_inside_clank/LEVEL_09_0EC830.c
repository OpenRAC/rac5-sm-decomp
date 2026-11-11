typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00318CBC[];
extern void func_0EC3A8(Entry *entry);

void func_0EC830(unsigned int index) {
    func_0EC3A8(&D_00318CBC[index]);
}

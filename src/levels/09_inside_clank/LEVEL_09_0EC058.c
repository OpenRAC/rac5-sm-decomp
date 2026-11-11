typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00318BB4[];
extern void func_0EBF28(void *entry, void *v);

void func_0EC058(unsigned int index, void *v) {
    func_0EBF28(&D_00318BB4[index], v);
}

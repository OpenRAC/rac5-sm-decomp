typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0031E1B4[];
extern void func_0E9108(void *entry, void *v);

void func_0E9238(unsigned int index, void *v) {
    func_0E9108(&D_0031E1B4[index], v);
}

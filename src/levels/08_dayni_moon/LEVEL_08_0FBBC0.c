typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_003806B4[];
extern void func_0FBA90(void *entry, void *v);

void func_0FBBC0(unsigned int index, void *v) {
    func_0FBA90(&D_003806B4[index], v);
}

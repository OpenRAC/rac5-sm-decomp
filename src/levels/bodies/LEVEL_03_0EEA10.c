typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0034C2B4[];
extern void func_0EE8E0(void *entry, void *v);

void func_0EEA10(unsigned int index, void *v) {
    func_0EE8E0(&D_0034C2B4[index], v);
}

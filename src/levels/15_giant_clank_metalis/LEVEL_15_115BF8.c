typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_002F29C4[];
extern void func_115798(Entry *entry);

void func_115BF8(unsigned int index) {
    func_115798(&D_002F29C4[index]);
}

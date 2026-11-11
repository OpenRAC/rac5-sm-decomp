typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002BC858[];
extern void func_0A6EE0(Entry *entry);

void func_0A7010(unsigned int index) {
    func_0A6EE0(&D_002BC858[index]);
}

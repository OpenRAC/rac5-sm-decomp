typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026AFA8[];
extern void func_0952A0(Entry *entry);

void func_0951A0(unsigned int index) {
    func_0952A0(&D_0026AFA8[index]);
}

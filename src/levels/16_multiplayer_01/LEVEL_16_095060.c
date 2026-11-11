typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026AFA8[];
extern void func_094F08(Entry *entry);

void func_095060(unsigned int index) {
    func_094F08(&D_0026AFA8[index]);
}

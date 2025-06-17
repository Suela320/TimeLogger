# 🕒 TimeLogger – Menaxhim Aktivitetesh në C++

TimeLogger është një aplikacion i thjeshtë në C++ që ju ndihmon të regjistroni aktivitetet tuaja ditore dhe kohën e shpenzuar për secilin. Ky projekt është zhvilluar si një ushtrim praktik mbi përdorimin e GitHub, C++, bashkëpunimit teknik dhe ndarjes së funksioneve përmes degezimeve.

---

## ⚙️ Karakteristikat

✅ Shto aktivitete me emër dhe minutazh  
📋 Shfaq të gjitha aktivitetet e regjistruara  
🧮 Llogarit totalin e minutave të shpenzuara  
🔍 Kërko aktivitete sipas përmbajtjes së emrit  
🎨 Mesazhe të ngjyrosura për përmirësim të përvojës vizuale

---

## 📁 Struktura e Projektit

TimeLogger/
├── src/
│ ├── main.cpp # Funksioni kryesor i programit
│ ├── logger.cpp # Implementimi i klasës ActivityLogger
│ └── logger.h # Deklaratat e funksioneve
├── data/
│ └── logs.txt # (krijohet automatikisht për të ruajtur aktivitetet)
├── .gitignore
├── LICENSE.txt
└── README.md

## 🖥️ Ekzekutimi
./timelogger

### Kërkesat:
- Kompajlues C++ (rekomandohet: g++)
- Git Bash / Terminal

### Kompajlimi:
```bash
g++ src/main.cpp src/logger.cpp -o timelogger


🧪 Shembull Përdorimi
1. Shto aktivitet
2. Shfaq aktivitete
3. Kërko aktivitet
4. Dil
Zgjedhja: 1
Emri i aktivitetit: Lexim
Kohëzgjatja (min): 30
✅ Aktiviteti u shtua me sukses!

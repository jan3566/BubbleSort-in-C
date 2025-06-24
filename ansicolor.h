#pragma once
#ifndef ANSI_COLORS_H
#define ANSI_COLORS_H

// Reset aller Textformatierungen
#define ANSI_RESET         "\x1b[0m"

// === Standard Text Colors ===
// === Standard-Textfarben ===
#define ANSI_BLACK         "\x1b[30m"  
#define ANSI_RED           "\x1b[31m"  
#define ANSI_GREEN         "\x1b[32m"  
#define ANSI_YELLOW        "\x1b[33m"  
#define ANSI_BLUE          "\x1b[34m"  
#define ANSI_MAGENTA       "\x1b[35m"  
#define ANSI_CYAN          "\x1b[36m"  
#define ANSI_WHITE         "\x1b[37m"  

// === Bold Text Colors ===
// === Fette Textfarben ===
#define ANSI_BOLD_BLACK    "\x1b[1;30m"  
#define ANSI_BOLD_RED      "\x1b[1;31m"  
#define ANSI_BOLD_GREEN    "\x1b[1;32m"  
#define ANSI_BOLD_YELLOW   "\x1b[1;33m"  
#define ANSI_BOLD_BLUE     "\x1b[1;34m"  
#define ANSI_BOLD_MAGENTA  "\x1b[1;35m"  
#define ANSI_BOLD_CYAN     "\x1b[1;36m"  
#define ANSI_BOLD_WHITE    "\x1b[1;37m"  

// === Underlined Text Colors ===
// === Unterstrichene Textfarben ===
#define ANSI_UNDER_BLACK   "\x1b[4;30m"  
#define ANSI_UNDER_RED     "\x1b[4;31m"  
#define ANSI_UNDER_GREEN   "\x1b[4;32m"  
#define ANSI_UNDER_YELLOW  "\x1b[4;33m"  
#define ANSI_UNDER_BLUE    "\x1b[4;34m"  
#define ANSI_UNDER_MAGENTA "\x1b[4;35m"  
#define ANSI_UNDER_CYAN    "\x1b[4;36m"  
#define ANSI_UNDER_WHITE   "\x1b[4;37m"  

// === Background Colors ===
// === Hintergrundfarben ===
#define ANSI_BG_BLACK      "\x1b[40m"  
#define ANSI_BG_RED        "\x1b[41m"  
#define ANSI_BG_GREEN      "\x1b[42m"  
#define ANSI_BG_YELLOW     "\x1b[43m"  
#define ANSI_BG_BLUE       "\x1b[44m"  
#define ANSI_BG_MAGENTA    "\x1b[45m"  
#define ANSI_BG_CYAN       "\x1b[46m"  
#define ANSI_BG_WHITE      "\x1b[47m"  

// === High Intensity Text ===
// === Helle Textfarben ===
#define ANSI_BRIGHT_BLACK   "\x1b[90m"  
#define ANSI_BRIGHT_RED     "\x1b[91m"  
#define ANSI_BRIGHT_GREEN   "\x1b[92m"  
#define ANSI_BRIGHT_YELLOW  "\x1b[93m"  
#define ANSI_BRIGHT_BLUE    "\x1b[94m"  
#define ANSI_BRIGHT_MAGENTA "\x1b[95m"  
#define ANSI_BRIGHT_CYAN    "\x1b[96m"  
#define ANSI_BRIGHT_WHITE   "\x1b[97m"  

// === Bold + High Intensity Text ===
// === Fette helle Textfarben ===
#define ANSI_BOLD_BRIGHT_BLACK   "\x1b[1;90m"  
#define ANSI_BOLD_BRIGHT_RED     "\x1b[1;91m"  
#define ANSI_BOLD_BRIGHT_GREEN   "\x1b[1;92m"  
#define ANSI_BOLD_BRIGHT_YELLOW  "\x1b[1;93m"  
#define ANSI_BOLD_BRIGHT_BLUE    "\x1b[1;94m"  
#define ANSI_BOLD_BRIGHT_MAGENTA "\x1b[1;95m"  
#define ANSI_BOLD_BRIGHT_CYAN    "\x1b[1;96m"  
#define ANSI_BOLD_BRIGHT_WHITE   "\x1b[1;97m"  

// === High Intensity Background ===
// === Helle Hintergrundfarben ===
#define ANSI_BG_BRIGHT_BLACK     "\x1b[100m"  
#define ANSI_BG_BRIGHT_RED       "\x1b[101m"  
#define ANSI_BG_BRIGHT_GREEN     "\x1b[102m"  
#define ANSI_BG_BRIGHT_YELLOW    "\x1b[103m"  
#define ANSI_BG_BRIGHT_BLUE      "\x1b[104m"  
#define ANSI_BG_BRIGHT_MAGENTA   "\x1b[105m"  
#define ANSI_BG_BRIGHT_CYAN      "\x1b[106m"  
#define ANSI_BG_BRIGHT_WHITE     "\x1b[107m"  

// === Text Effects ===
// === Text-Effekte ===
#define ANSI_BOLD       "\x1b[1m"  // Fett
#define ANSI_DIM        "\x1b[2m"  // Gedimmt
#define ANSI_UNDERLINE  "\x1b[4m"  // Unterstrichen
#define ANSI_REVERSE    "\x1b[7m"  // Farben umkehren (invertiert)
#define ANSI_HIDDEN     "\x1b[8m"  // Unsichtbar

#endif // ANSI_COLORS_H

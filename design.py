import sys
import pyfiglet
from colorama import init as colorama_init

# design.py
# Generates a colorful ASCII-art design of the name "lenox okoth".
# Tries to use pyfiglet and colorama if available, otherwise falls back to a simple colored print.


TEXT = "lenox okoth"

# ANSI color codes (foreground)
ANSI_COLORS = [
    "\033[31m",  # red
    "\033[33m",  # yellow
    "\033[32m",  # green
    "\033[36m",  # cyan
    "\033[34m",  # blue
    "\033[35m",  # magenta
    "\033[91m",  # bright red
    "\033[93m",  # bright yellow
    "\033[92m",  # bright green
    "\033[96m",  # bright cyan
    "\033[94m",  # bright blue
    "\033[95m",  # bright magenta
]
RESET = "\033[0m"

def colored_ascii_with_pyfiglet(text):
    try:
        colorama_init()  # Enables ANSI on Windows
    except Exception:
        # pyfiglet or colorama not available
        return None

    fig = pyfiglet.Figlet(font="slant")
    art = fig.renderText(text.upper())
    lines = art.splitlines()
    out_lines = []
    color_idx = 0
    for line in lines:
        colored_line = []
        for ch in line:
            if ch == " ":
                colored_line.append(" ")
            else:
                colored_line.append(ANSI_COLORS[color_idx % len(ANSI_COLORS)] + ch + RESET)
                color_idx += 1
        out_lines.append("".join(colored_line))
    return "\n".join(out_lines)

def simple_colored_text(text):
    # Simple fallback: color each character (not large ASCII art)
    out = []
    color_idx = 0
    for ch in text:
        if ch.isspace():
            out.append(" ")
        else:
            color = ANSI_COLORS[color_idx % len(ANSI_COLORS)]
            out.append(color + ch + RESET)
            color_idx += 1
    return "".join(out)

def main():
    art = colored_ascii_with_pyfiglet(TEXT)
    if art is None:
        art = simple_colored_text(TEXT)
        # Provide a simple decorative underline for fallback
        art += "\n" + "-" * (len(TEXT) + 10)
    print(art)

if __name__ == "__main__":
    main()
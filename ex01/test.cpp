#include <iostream>
#include <locale>

void drawTable(int rows, int cols) {
    // Caractères de dessin de boîte Unicode
    const char *horizontal = "\u2500"; // ─
    const char *vertical = "\u2502";   // │
    const char *corner_tl = "\u250C";  // ┌
    const char *corner_tr = "\u2510";  // ┐
    const char *corner_bl = "\u2514";  // └
    const char *corner_br = "\u2518";  // ┘
    const char *cross = "\u253C";      // ┼
    const char *t_top = "\u252C";      // ┬
    const char *t_bottom = "\u2534";   // ┴
    const char *t_left = "\u251C";     // ├
    const char *t_right = "\u2524";    // ┤

    // Paramètre local pour permettre l'affichage des caractères Unicode
    std::locale::global(std::locale("en_US.UTF-8"));

    // Ligne supérieure
    std::cout << corner_tl;
    for (int i = 0; i < cols; ++i) {
	for (int j = 0; j < 6; j++)
    	    std::cout << horizontal << horizontal << horizontal;
        if (i < cols - 1) {
            std::cout << t_top;
        }
    }

    std::cout << corner_tr << std::endl;

    // Lignes intermédiaires
//		std::cout << "coucou\n";
    for (int i = 0; i < rows; ++i) {
        for (int k = 0; k < 1; ++k) {
            std::cout << vertical;
            for (int j = 0; j < 1; j++) {
                std::cout << "\t      index" << vertical; // Espace pour les données de la cellule
                std::cout << "\t    first name" << vertical; // Espace pour les données de la cellule
                std::cout << "\t        last name" << vertical; // Espace pour les données de la cellule
                std::cout << "\t    nickname" << vertical; // Espace pour les données de la cellule
            }
            std::cout << std::endl;
        }

        if (i < rows - 1) {
            std::cout << t_left;
            for (int j = 0; j < cols; ++j) {
		for (int j = 0; j < 6; j++)
               		 std::cout << horizontal << horizontal << horizontal;
                if (j < cols - 1) {
                    std::cout << cross;
                }
            }
            std::cout << t_right << std::endl;
        }
    }

    // Ligne inférieure
    std::cout << corner_bl;
    for (int i = 0; i < cols; ++i) {
	for (int j = 0; j < 6; j++)
        	std::cout << horizontal << horizontal << horizontal;
        if (i < cols - 1) {
            std::cout << t_bottom;
        }
    }
    std::cout << corner_br << std::endl;
}

/*
int main() {
    int rows = 3;
    int cols = 4;
    drawTable(rows, cols);
    return 0;
}
*/

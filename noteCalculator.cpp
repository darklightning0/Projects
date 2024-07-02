#include <iostream>

using namespace std;

int main() {
    const int TOTAL_SUBJECTS = 14;

    const float weights[] = {6, 5, 5, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    const string subjects[] = {"Matematik", "İngilizce", "Türkçe", "Almanca", "Kodlama", "Biyoloji", "Coğrafya", "Din", "Felsefe", "Fizik", "Kimya", "Tarih", "Spor", "Proje"};

    float total_n = 0;
    float temp;

    for (int i = 0; i < TOTAL_SUBJECTS; ++i) {
        cout << subjects[i] << " notunuzu girin: ";
        cin >> temp;
        total_n += temp * weights[i];
    }

    const float total_weight = 39;
    float ortalama = total_n / total_weight;

    cout << "Ağırlıklı ortalama notunuz: " << ortalama;

    return 0;
}


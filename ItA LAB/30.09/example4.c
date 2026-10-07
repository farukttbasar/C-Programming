# include <stdio.h>

int main(void) {
    int total_internet = 50;
    int video_usage = 18;
    int social_usage = 9;
    int research_usage = 7;
    int min_required = 10;
    int used_internet = video_usage + social_usage + research_usage;
    int remaining_internet = total_internet - used_internet;

    printf("Toplam kullanilan internet: %d GB\n", used_internet);
    printf("Kalan internet: %d GB\n", remaining_internet);
    printf("Paket asilmis mi? (%d)\n", used_internet > total_internet);
    printf("En az 10 GB kalmis mi? (%d)\n", remaining_internet >= min_required);
    printf("Dersler icin yeterli mi? (%d)\n", used_internet <= total_internet && remaining_internet >= min_required);

    return 0;
}
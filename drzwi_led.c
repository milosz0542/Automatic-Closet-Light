#include <avr/io.h>
#include <util/delay.h>

// Definicje pinów (ATmega328P DIP)
#define KONTAKTRON1_PIN   PD2  // Pin 4 (D2)
#define KONTAKTRON2_PIN   PD3  // Pin 5 (D3)
#define LED_TASMA_PIN     PB0  // Pin 14 (D8)

void init_ports() {
    // Kontaktrony jako wejścia BEZ podciągania (bo są NO)
    DDRD  &= ~((1 << KONTAKTRON1_PIN) | (1 << KONTAKTRON2_PIN));
    PORTD &= ~((1 << KONTAKTRON1_PIN) | (1 << KONTAKTRON2_PIN));
    
    // Taśma LED jako wyjście
    DDRB  |= (1 << LED_TASMA_PIN);
    PORTB &= ~(1 << LED_TASMA_PIN); // Wyłącz na starcie
}

uint8_t sprawdz_stan_kontaktronow() {
    // Zwraca 1 jeśli którykolwiek kontaktron jest ZAMKNIĘTY (drzwi zamknięte)
    return !( (PIND & (1 << KONTAKTRON1_PIN)) || (PIND & (1 << KONTAKTRON2_PIN)) );
}

int main(void) {
    init_ports();
    
    while (1) {
        if (sprawdz_stan_kontaktronow()) {
            PORTB |= (1 << LED_TASMA_PIN);  // Włącz LED gdy którykolwiek zamknięty
        } else {
            PORTB &= ~(1 << LED_TASMA_PIN); // Wyłącz LED gdy oba otwarte
        }
        _delay_ms(100);
    }
}

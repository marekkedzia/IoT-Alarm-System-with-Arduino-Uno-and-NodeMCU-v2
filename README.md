### Plan Projektu: WATCHER360

#### Opis Projektu:
WATCHER360 to zaawansowany system bezpieczeństwa domowego, zbudowany na platformie Arduino. Zapewnia on kompleksową ochronę, łącząc w sobie funkcje antywłamaniowe, monitoring oraz system ostrzegania przed zagrożeniami. Został stworzony z myślą o zapewnieniu bezpieczeństwa mieszkańcom, oferując jednocześnie łatwość obsługi i możliwość elastycznej konfiguracji.

#### Główne Funkcje i Składniki:
1. **System Alarmowy**: Syrena alarmowa aktywowana jest w przypadku wykrycia włamania, ostrzega mieszkańców i odstrasza potencjalnych intruzów.
2. **Czujniki Dymu i Gazu**: Wykrywają zagrożenia pożarowe i wyciek gazu, zapewniając dodatkową ochronę.
3. **Czujniki Ruchu**: Wykrywają ruch w pełnym obszarze dookoła urządzenia, zwiększając skuteczność monitoringu.
4. **Bezprzewodowa Komunikacja**: System wykorzystuje moduły WiFi do komunikacji z serwerem, który wysyła powiadomienia SMS do właściciela.

#### Lista Wykorzystywanych Komponentów:
1. **Arduino Uno**: Centralny kontroler systemu.
2. **NodeMcu v2**: Zapewnia łączność z serwerem.
3. **Czytnik kart RFID RC522**: Do autoryzacji i dezaktywacji systemu.
4. **Czujniki ruchu PIR (HC-SR501)**: Do wykrywania ruchu.
5. **Czujniki Dymu i Gazu (MQ-2)**: Do monitorowania zagrożeń środowiskowych.
6. **Syrena Alarmowa**: Do ostrzegania o włamaniu.
7. **Powerbank**: Do zasilania systemu.

#### Wykorzystane Technologie:
1. **Node.js + Express**: Dla backendu serwera, który będzie zdeployowany na Google Cloud Platform (GCP).
2. **SMS Gateway**: Do wysyłania powiadomień do właściciela.

#### Architektura Systemu:
1. **Arduino Uno** działa jako centralny kontroler systemu, zarządzając czujnikami i modułem WiFi.
2. **NodeMcu v2** łączy Arduino z serwerem na GCP, przesyłając dane z czujników.
3. **Serwer na GCP** przetwarza dane, loguje zdarzenia i wysyła powiadomienia SMS do właściciela.

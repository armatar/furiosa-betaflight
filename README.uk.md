# Інструкція зі збірки Furiosa Betaflight

*Читати іншими мовами: [English](README.md)*

Конфігурація прошивки для польотних контролерів Furiosa, сумісна з Betaflight 4.5.

## Підтримуване обладнання
- Furiosa Rev C
- Furiosa Rev D

Ревізію можна знайти написаною на платі Furiosa PCB.

## Вимоги
- Git
- Make
- GCC
- Мінімум 1ГБ вільного місця на диску
- Операційна система:
  - Linux (рекомендовано)
  - macOS
  - Windows (потребує WSL або Git Bash)

## Структура каталогів
```
betaflight/
├── src/
│   └── config/  <- Файли конфігурації Furiosa
└── obj/         <- Скомпільовані файли прошивки
```

## Процес збірки

### 1. Клонування репозиторію Betaflight
```bash
# Отримання вихідного коду Betaflight
git clone https://github.com/betaflight/betaflight.git

# Перехід до каталогу
cd betaflight

# Перехід на гілку 4.5-maintenance
git checkout 4.5-maintenance
```

### 2. Додавання конфігурації Furiosa
```bash
# Перехід до каталогу src та клонування конфігурації Furiosa
cd src
git clone https://github.com/armatar/furiosa-betaflight-config.git config
cd ..
```

### 3. Налаштування середовища збірки
```bash
# Встановлення інструментарію ARM
make arm_sdk_install
```

### 4. Збірка прошивки
```bash
# Збірка прошивки для Revision C
make FURIOSA_revC

# Збірка прошивки для Revision D
make FURIOSA_revD
```

### 5. Вихідні файли
Скомпільовані файли прошивки будуть доступні в `betaflight/obj/`:
- `betaflight_4.5.x_FURIOSA_revC.hex`
- `betaflight_4.5.x_FURIOSA_revD.hex`

## Усунення проблем

Якщо виникають помилки збірки:
1. Переконайтеся, що встановлені всі необхідні компоненти
2. Перевірте, чи знаходитесь ви на правильній гілці (4.5-maintenance)
3. Перевірте, чи правильно склонована конфігурація Furiosa (`src/config/`)
4. Спробуйте очистити збірку командою `make clean` перед повторною збіркою

## Час збірки
- Перша збірка: ~5-10 хвилин (включаючи налаштування інструментарію)
- Наступні збірки: ~2-3 хвилини на кожну версію

## Підтримка та спільнота

### Отримання допомоги
- **Проблеми з Furiosa**: [Відкрити issue](https://github.com/armatar/furiosa-betaflight-config/issues)
- **Проблеми з Betaflight**: [Betaflight Issues](https://github.com/betaflight/betaflight/issues)

### Ресурси
- [Betaflight Configurator](https://github.com/betaflight/betaflight-configurator/releases) - Для прошивки
- [Betaflight Wiki](https://betaflight.com/docs) - Офіційна документація Betaflight

При повідомленні про проблеми, будь ласка, вкажіть:
- Ревізію плати (C або D)
- Версію Betaflight
- Деталі середовища збірки
- Повідомлення про помилки або логи


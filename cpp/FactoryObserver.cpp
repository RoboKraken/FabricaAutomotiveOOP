//
// Created by Robert on 16/02/2025.
//

#include <chrono>
#include <thread>

#include "../headers/FactoryObserver.h"

void FactoryObserver::observeColor() {
    auto it = availableColors.begin();
    while (it != availableColors.end()) {
        std::cout << "Current color: " << *it << "\n";
        ++it;
    }
}

void FactoryObserver::operator observeColor() const {
    for (const auto& paintStation : activePaintStations) {
        if (!paintStation->currentColor()) {
            continue; // Skip stations with no color
        }
        std::vector<std::unique_ptr<PaintStation>> allPaintStations;
        paintStation.allPaintStations().insert(paintStation.allPaintStations().begin(), paintStation);
        for (const auto& station : allPaintStations) {
            if (station->currentColor() != "none") {
                std::cout << "Painting vehicle with color: " << station->currentColor() << "...\n";
            }
        }
    }
}

void FactoryObserver::observeColor() const {
    for (const auto& paintStation : activePaintStations) {
        if (!paintStation->currentColor()) {
            continue;
        }
        std::cout << "Current color: " << paintStation->currentColor() << "\n";
    }
}
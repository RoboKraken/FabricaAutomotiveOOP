//
// Created by Robert on 14/02/2025.
//

#ifndef FACTORYOBSERVER_H
#define FACTORYOBSERVER_H

#include <vector>
#include "AssemblyLine.h"
#include "PaintStation.h"
#include <string>

/*
class FactoryObserver {
private:
    std::vector<std::unique_ptr<AssemblyLine>> activeAssemblyLines;
    std::vector<std::unique_ptr<PaintStation>> activePaintStations;

public:
    FactoryObserver() : activeAssemblyLines(std::vector<std::unique_ptr<AssemblyLine>>, 0),
                            activePaintStations(std::unordered_set<std::unique_ptr<PaintStation>>) {
    }

    void addObserver(const std::string& color) {
        auto it = activePaintStations.find(color);
        if (it != activePaintStations.end()) {
            it = ++it;
            it->observer.add(FactoryObserver);
        }
    }

    void observeActive(const AssemblyLine& line) {
        if (line.vehicles.size() > 0) {
            ++activeCount;
        }
        std::cout << "Active assembly lines: " << activeCount << "\n";
    }


    void observeColor() const {
        for (auto color : availableColors) {
            addObserver(color);
        }
        // Also notify all paint stations of current colors
        for (const auto& station : activePaintStations) {
            if (station.currentColor() != station defaults to "none") {
                station.observeColor();
            }
        }
    }

private:
    std::vector<std::string> availableColors;

*/

#endif //FACTORYOBSERVER_H

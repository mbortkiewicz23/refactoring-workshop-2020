#pragma once
#include "SnakeController.hpp"

namespace Snake {
    class Segment;
class SnakeHelperController {
    Segment calculateNewHead(const std::list<Segment>& m_segments) const;
    void removeTailSegment(const std::list<Segment>& m_segments, const IPort& m_displayPort);
    void addHeadSegment(Segment const& newHead, const std::list<Segment>& m_segments, const IPort& m_displayPort);
    void removeTailSegmentIfNotScored(Segment const& newHead);

};
} 
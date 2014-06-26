/*
  Copyright (c) 2012, BuildmLearn Contributors listed at http://buildmlearn.org/people/
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

  * Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  * Neither the name of the BuildmLearn nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "templates/quiz/quizcore.h"

#include "templates/quiz/quizeditor.h"
#include "templates/quiz/quizsimulator.h"


QuizCore::QuizCore(TemplateEntryPoint *entry_point, QObject *parent)
  : TemplateCore(entry_point, parent) {
  m_editor = new QuizEditor(this);
  m_simulator = new QuizSimulator(this);
}

QuizCore::~QuizCore() {
  qDebug("Destroying QuizCore instance.");
}

QString QuizCore::generateRawData() {
  // TODO: Finish when neeeded.
  return QString();
}

bool QuizCore::generateApkFile() {
  return true;
}

void QuizCore::launch() {
  quizEditor()->launch();
  quizSimulator()->launch();
}

QuizEditor *QuizCore::quizEditor() {
  return static_cast<QuizEditor*>(m_editor);
}

QuizSimulator *QuizCore::quizSimulator() {
  return static_cast<QuizSimulator*>(m_simulator);
}